from pydoc import describe
import pandas as pd
from scipy.stats import mannwhitneyu
from cliffs_delta import cliffs_delta
from sklearn.metrics import cohen_kappa_score
import matplotlib.pyplot as plt


print('Foi feito um levantamento de microservicos, em java e c#')
print('Foi filtrado repositorios com quantidade de forks maior que 100, na qual tem uma maior relevancia')
print('')

dfjava = pd.read_csv('java.csv')
dfc = pd.read_csv('c.csv')




# Creating plot
print('============== JAVA =============')
print(dfjava.describe())
plt.boxplot(dfjava)
plt.show()

print('')
print('============== C# =============')
print(dfc.describe())
plt.boxplot(dfc)
plt.show()

results = mannwhitneyu(dfjava.to_numpy(), dfc.to_numpy())
print(results)

print('')

d, res = cliffs_delta(dfjava.to_numpy(), dfc.to_numpy())

print(d,res)





