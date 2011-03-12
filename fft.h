
typedef ogg_int32_t FFTSample;

typedef struct FFTComplex {
    FFTSample re, im;
} FFTComplex;

void ff_fft_calc_c(int nbits, FFTComplex *z);