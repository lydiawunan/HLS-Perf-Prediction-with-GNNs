#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250497624
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, float p_15, signed char p_17,
                  unsigned short p_19[1][1], unsigned int p_21[5][1][3])
{
  char v_27;
  int v_25;
  float v_23;
  int v_13;
  long long v_11;
  unsigned short v_9;
  float v_7;
  double v_5;
  unsigned char v;
  unsigned char result;
  v_25 = 31183;
  v_23 = (float)p_17;
  v_13 = -601637565;
  v_11 = -22128LL;
  v_9 = (unsigned short)p_15;
  v_5 = -3250412024.71;
  result = (unsigned char)p;
  if (((long long)v_9 | v_11) % (long long)(((int)4927641600.f + v_25) + 153) > (long long)(- (
      3703466898UL * (unsigned long)v_5 - (unsigned long)(10924 - (int)p_19[0][0])))) {
    v = (unsigned char)((unsigned long long)(86 / ((int)((unsigned char)(- p_15)) + 269)) | 3403ULL);
    v_23 = (float)(((int)(- v_9) + (int)p / ((int)p_17 + 568)) - - (v_13 * 139));
    v_27 = (char)((int)(- p_19[0][0]) % (~ (83 * (int)v_9) + 594));
  }
  else {
    v_9 = (unsigned short)(-18446744073555371484ULL);
    v = (unsigned char)172;
    v_27 = (char)(- (p_21[4][0][0] * (p_21[1][0][1] * p_21[4][0][2])));
  }
  if ((int)((float)(18446744073381943363ULL + (unsigned long long)p_19[0][0]) + 
            p_15 * v_23) % (((v_25 ^ -20462) - ((int)result + (int)p_17)) + 1008) <= 
      (int)v_27 % (-23 % ((int)((signed char)(v_5 - (double)v_11)) + 788) + 785)) {
    v_7 = (float)((long long)(! v_9) / ((v_11 / (long long)((int)p + 563)) % (
                                        -12680795LL % (long long)(v_13 + 684) + 113LL) + 364LL));
    v_5 = (double)((int)((unsigned char)(- (- v_7))) / 122);
    result = (unsigned char)((long)((int)v / ((int)p + 60) >> ((int)(
                                                               54718. + v_5) & 31)) & 
                             47930L * (long)-2.93473770176e+38f);
  }
  else result = (unsigned char)(- ((p_15 - (float)p_17) / ((float)((unsigned int)p_19[0][0] + p_21[4][0][2]) + 683.f)));
  return result;
}


