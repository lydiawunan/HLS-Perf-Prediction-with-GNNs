#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 576557007
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p[1][5][2], float p_5, long long p_9, short p_17[1][3],
         unsigned long long p_19)
{
  unsigned char v_23;
  int v_21;
  double v_15;
  unsigned long v_13;
  int v_11;
  float v_7;
  short v;
  long result;
  v_23 = (unsigned char)p_19;
  v_21 = -149859032;
  v_15 = (double)p_9;
  v_13 = 57899UL;
  v_11 = (int)p[0][1][1];
  result = -17380L;
  if ((unsigned long long)((unsigned long)((int)v_23 << ((int)((unsigned char)p_5) & 7)) & (
                           (unsigned long)p[0][2][1] - 43845UL)) + ((unsigned long long)(
                                                                    56103U % (unsigned int)(
                                                                    (int)v_23 + 918)) + ~ p_19) == (unsigned long long)(- (
      (int)v_23 - 28639))) {
    v_13 = (unsigned long)(((unsigned long long)(- v_13) | p_19) / (unsigned long long)(
                           (19785L - result) % ((result + (long)v_21) + 926L) + 905L));
    v_15 = (double)(! (v_21 % ((int)p_17[0][0] + 375)) & -20348);
    v_7 = (float)(~ (! p_19 / 289496610ULL));
  }
  else {
    v_7 = (float)(p_9 * p_9);
    v_21 = (int)1128994.34742;
    v_13 = (unsigned long)(~ v_21);
  }
  if (132643707LL + (long long)(v_13 * (unsigned long)((double)p_5 * 1.25741104692e+38)) <= (long long)(
      v_15 * (double)(((int)p_17[0][2] << (p_19 & 15ULL)) & (v_11 << (
                                                             p_9 & 31LL))))) {
    v = - p[0][0][0];
    result = (long)v;
  }
  else {
    result = -797481011L;
    result = (long)((long long)((long)v_7 / (result + 465L)) / (p_9 / (long long)(
                                                                v_11 + 485) + 26LL) >> (
                    ! result & 63L));
    result = (long)(832213810LL * (long long)(- p_5 + p_5 / ((float)result + 500.f)));
  }
  return result;
}


