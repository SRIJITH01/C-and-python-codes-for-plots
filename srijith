import numpy as np
import matplotlib.pyplot as plt
from coeffs import *

P=np.array([4,7])
O=np.array([0,0])
d=np.linalg.norm(P-O)

len=100
r=np.sqrt(9)

theta=np.linspace(0,2*np.pi,len)
x_circ=np.zeros((2,len))
x_circ[0,:]=r*np.cos(theta)
x_circ[1,:]=r*np.sin(theta)
x_circ=(x_circ.T+O).T

O1=O-P
print(O1)



K=np.sqrt(9/56)
theta=np.arctan(K)
T1=np.array([np.cos(theta),-np.sin(theta)])
T2=np.array([np.sin(theta),np.cos(theta)])
T=np.vstack((T1,T2))
J=T@O1
Q1=J+P

F1=np.array([np.cos(-theta),-np.sin(-theta)])
F2=np.array([np.sin(-theta),np.cos(-theta)])
F=np.vstack((F1,F2))
Y=F@O1
print(Y)
Q2=Y+P

x_PO=line_gen(P,O)
x_AP=line_gen(P,Q1)
x_PM=line_gen(P,Q2)

plt.plot(P[0], P[1], 'o')
plt.text(P[0] * (1 + 0.1), P[1] * (1 - 0.1) , 'P')
plt.plot(O[0], O[1], 'o')
plt.text(O[0] * (1 - 0.2), O[1] * (1) , 'O')
plt.plot(Q1[0], Q1[1], 'o')
plt.text(Q1[0] * (1 + 0.1), Q1[1] * (1 - 0.1) , 'Q1')
plt.plot(Q2[0], Q2[1], 'o')
plt.text(Q2[0] * (1 + 0.1), Q2[1] * (1 - 0.1) , 'Q2')

plt.plot(x_PO[0,:],x_PO[1,:],label='$PO$')
plt.plot(x_PQ1[0,:],x_PQ1[1,:],label='$PQ1$')
plt.plot(x_PQ2[0,:],x_PQ2[1,:],label='$PQ2$')
plt.plot(x_circ[0,:],x_circ[1,:],label='$circle$')
plt.xlabel('$X$')
plt.ylabel('$Y$')
plt.legend(loc='upper right')
plt.grid() 
plt.axis('equal')

plt.show()
