#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 59332439
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p[2][3], long p_4[3][1][3],
                 unsigned short p_7, unsigned long long p_9, long long p_11)
{
  signed char v_21;
  unsigned short v_19;
  double v_17;
  unsigned int v_15;
  int v_13;
  unsigned short v;
  unsigned int result;
  v_21 = (signed char)p[0][1];
  v_19 = p_7;
  v_17 = (double)p_7;
  v_15 = 4294961346U;
  v_13 = (int)p_11;
  v = (unsigned short)19813;
  if (p_11 != 91LL % (((long long)((int)v_19 ^ (int)p_7) - (p_11 - (long long)v_21)) + 95LL)) {
    v_15 = (unsigned int)((long)v / 673681440L);
    result = (unsigned int)(352436132UL * (unsigned long)v_17);
    v_15 = (unsigned int)(((unsigned long long)v_15 - (unsigned long long)result % 18446744073709491268ULL) * (unsigned long long)(
                          ! p_11 | (long long)(p_4[0][0][1] % ((long)v_17 + 626L))));
  }
  else {
    v_13 = (int)(43023UL * (90UL * (17212UL & (unsigned long)p_4[1][0][2])));
    v_17 = (double)7.36473510292e+37f;
    result = (unsigned int)(4294910620. * v_17);
  }
  if (((unsigned long long)((int)v / -3993) + p_9 / (unsigned long long)(
                                              p_11 + 574LL)) << ((long long)(
                                                                 p_4[0][0][0] + p_4[0][0][0]) % (
                                                                 ~ p_11 + 155LL) & 63LL) >= (unsigned long long)(
      (unsigned long)p_4[1][0][2] + (unsigned long)(result % ((unsigned int)v_13 % (
                                                              v_15 + 1006U) + 808U)))) 
    result = (unsigned int)(~ ((unsigned long)((int)((unsigned short)-966.994792306) * (int)p[0][2]) + 37684UL));
  else {
    result = (unsigned int)(143 - - ((int)v & (int)p_7));
    result = (unsigned int)(~ (28335UL * ((unsigned long)result + (unsigned long)p_4[0][0][1])));
    result = ((result * result) % (unsigned int)((int)(- p[0][0]) + 449)) * 22294U;
  }
  return result;
}


