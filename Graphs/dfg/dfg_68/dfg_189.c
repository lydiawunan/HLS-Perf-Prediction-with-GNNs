#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191384095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, unsigned long long p_5[3][2][4], short p_11,
                   signed char p_13[2][5][4], unsigned short p_19)
{
  long long v_23;
  unsigned short v_21;
  signed char v_17;
  float v_15;
  unsigned long long v_9;
  float v_7;
  float v;
  unsigned short result;
  v_23 = -177763423LL;
  v_21 = (unsigned short)p_5[1][0][0];
  v_17 = (signed char)-51;
  v_15 = (float)p;
  v_7 = -5782841344.f;
  v = 1.25587402474e+38f;
  v_9 = (unsigned long long)((long long)(((int)((signed char)((double)v_15 * 5621953263.22)) - (int)(! p_13[0][2][0])) - (
                                         (int)-1.0556297235e+38 + (int)v_17 / (
                                                                  (int)p + 413))) / (
                             (long long)(((int)p_19 << ((int)v_21 & 15)) ^ (int)p_13[0][1][3]) % (
                             (long long)((int)p / 127) / ((long long)p_19 / (
                                                          v_23 + 777LL) + 25LL) + 171LL) + 682LL));
  result = (unsigned short)((double)((unsigned long long)((int)p >> (
                                                          (int)((short)v_7) & 15)) / (
                                     ! v_9 + 195ULL)) / (936.314581896 * (double)v + 953.) - (double)(
                            (float)(~ p_5[1][1][0]) * ((float)((int)p_11 - (int)p_13[0][1][2]) - (
                                                       32136.f + v))));
  v = 38062.f * (0.f * (v - (float)result)) - (float)(! ((int)(- v_7) / (
                                                         (int)p * 122 + 222)));
  result = (unsigned short)((unsigned long long)v + - ((unsigned long long)p + p_5[1][1][1]) % 3257202970ULL);
  return result;
}


