import numpy as np
import matplotlib.pyplot as plt

# Input signal
signal = np.array([1, 2, 3, 4, 5, 6, 7, 8])

# Compute the FFT of the signal
fft_result = np.fft.fft(signal)

# Compute the magnitude and phase spectrum of the FFT result
magnitude_spectrum = np.abs(fft_result)
phase_spectrum = np.angle(fft_result)

# Compute the IFFT of the FFT result and take the real part
reconstructed_signal = np.real(np.fft.ifft(fft_result))

# Plot the input signal
plt.figure(figsize=(12, 4))
plt.subplot(2, 2, 1)
plt.stem(signal)
plt.title('Input Signal')
plt.xlabel('Sample Index')
plt.ylabel('Amplitude')

# Plot the magnitude spectrum
plt.subplot(2, 2, 2)
plt.stem(magnitude_spectrum)
plt.title('Magnitude Spectrum')
plt.xlabel('Frequency Bin')
plt.ylabel('Magnitude')

# Plot the phase spectrum
plt.subplot(2, 2, 3)
plt.stem(phase_spectrum)
plt.title('Phase Spectrum')
plt.xlabel('Frequency Bin')
plt.ylabel('Phase (radians)')

# Plot the reconstructed signal
plt.subplot(2, 2, 4)
plt.stem(reconstructed_signal)
plt.title('Reconstructed Signal')
plt.xlabel('Sample Index')
plt.ylabel('Amplitude')

plt.tight_layout()
plt.show()
