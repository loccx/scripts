import numpy as np

P = np.array([
    [0.2, 0.8],
    [0.8, 0.2],
])

def compute_P_n(P, n):
    return np.linalg.matrix_power(P, n)

P_n = compute_P_n(P, 1000)

print(P_n)
