# -*- coding: utf-8 -*-
"""
Laboratórios de Matemática I/II

 Autor:
Número:
 Turma: 
  Data:

"""
from __future__ import division
from __future__ import print_function
from LabMat1_Lib import *
import pylab as pl
clc()
#%% início
#Pergunta 1
n=symbols('n',positive=True,integer=True)
t=sym('t')

som=inline((2/(n*pi)*cos(n*pi*t+(-1)**n*(pi/2))),(n,t))

sf=-1+symsum(som(n,t),n,1,10)

bn=(((-1)**n)*2)/(n*pi)

Hn=sqrt(bn**2)

ph=((-1)**n)*(pi/2)

w0=pi
figure(1)
W=[i*w0 for i in range(10)]
HN=[abs(-1)]+[subs(Hn,n,i) for i in range(1,10)]
PH=[subs(ph,n,i) for i in range(1,10)]
subplot(1,2,1);stem(W,HN);axis([-5,35,-1,2]);grid(1)
subplot(1,2,2);stem(W[1:],PH);axis([-5,35,-4,4]);grid(1)


#%%
#Pergunta 3
a=sym('a')
vy=list()
vx=list()
f1=list()

vy.append(0)
vx.append(0)
h=0.5
for i in range(0,3):
    vx.append(vx[i]+h)
    f1.append(vx[i]*vy[i]+2*a*vx[i])
    vy.append(vy[i]+h*f1[i])




#%%
#Pergunta 5

vq=list()
vi=list()
f2=list()
f3=list()


vq.append(1)
vi.append(0)

h=0.5
for i in range(0,2):

    f2.append(vi[i])
    f3.append(5-3*vq[i]-4*vi[i])
    vq.append(vq[i]+h*f2[i])
    vi.append(vi[i]+h*f3[i])




#%%
#Pergunta 6
t=sym('t') 
T=2

P=(1/T)*intc(t**2,t,-1,1) 



Hn=2/(n*pi) 
Pn=symsum(Hn**2,n,1,5)/2 



#%%
#Pergunta 7
vy=list()
vx=list()
f1=list()

vy.append(0)
vx.append(0)
h=0.1
for i in range(0,10):
    vx.append(vx[i]+h)
    f1.append(1-vx[i]*exp(-vy[i]))
    vy.append(vy[i]+h*f1[i])

#%%
x,y=sym('x y')
f=inline(1-x*exp(-y),(x,y))
Jnl=[-1,1,0,1]


xx0,yy0=Euler(f(x,y),(x,y))

xx,yy=Euler(f(x,y),(x,y),x0=0,y0=0,xf=1,h=0.1)


CampoVetores(f(x,y),(x,y),J=Jnl,d=[5,5],norm=False)
#LinhasCorrente(f(x,y),(x,y),J=Jnl,d=[5,5])



#%%
#Pergunta 8

m=1
K=50
b=2
F=10

t=sym('t')
x=Function('x')
C=[symbols('C{}'.format(i)) for i in range(1,3)] 


ED2=Eq(diff(x(t),t,2)*m+b*diff(x(t),t)+K*x(t),F)


sg=dsolve(ED2,x(t))
display(sg)



x0=0
dx0=0

e1=x0-subs(sg.rhs,t,0)
e2=dx0-subs(diff(sg.rhs,t),t,0)

S=solve([e1,e2],C)[0]
sp=subs(subs(sg,C[0],S[0]),C[1],S[1])
display(sp)
#%%
x=sym('x')
f=(13/40)*cos(x)*exp(-2*x)+(9/40)*sin(3*x)
g=((-1/40)*sin(x)+(13/40)*cos(x))*exp(-2*x)
i=(9/40)*sin(3*x)-(13/40)*cos(3*x)
ezplot(f)
ezplot(g)
ezplot(i)
show()
