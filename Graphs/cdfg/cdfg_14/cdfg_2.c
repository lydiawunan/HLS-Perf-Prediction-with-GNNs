#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 648631682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, unsigned long p_4[5][4][3],
                 unsigned long p_7[3], double p_9[4][3], unsigned short p_13)
{
  long long v_27;
  unsigned int v_25;
  unsigned char v_23;
  unsigned int v_21;
  long long v_19;
  float v_17;
  long long v_15;
  float v_11;
  short v;
  unsigned int result;
  v_27 = (long long)p_13;
  v_25 = (unsigned int)p_4[4][0][1];
  v_23 = (unsigned char)212;
  v_21 = 4294929365U;
  v_19 = 38838LL;
  v_17 = -7.13465246249e+37f;
  v_15 = 819918551LL;
  v_11 = (float)p;
  result = 4294957410U;
  if (-261136954LL == ((v_15 / 35413LL) * (long long)p ^ (long long)(
                       -529784480.f + v_11 * v_11))) {
    v_17 = (float)(((unsigned long)(- v_23) | 60008UL % (unsigned long)(
                                              result + 149U)) * (unsigned long)(
                   (float)v_23 * v_11 + (float)(v_25 % ((unsigned int)-4076654271.07 + 858U))));
    v_11 = (float)(v_21 * (v_21 * (unsigned int)p) - (result - 20034U));
    v_15 = (long long)(5111ULL / (unsigned long long)((v_19 + ((long long)result - v_19)) + 109LL));
  }
  else {
    v_15 = (long long)p_13 * ((long long)p - ((long long)p_7[0] - v_27));
    result = (unsigned int)-3.32156029332e-17f;
    v_11 = (float)(signed char)-2;
  }
  if (! (~ (115U % (result + 537U))) <= (unsigned int)((int)((unsigned short)v_17) + 23631)) {
    v = (short)(~ p_4[3][3][0] * ~ p_7[2] - 50013UL % (p_4[4][0][2] + 1014UL));
    result = (unsigned int)(((unsigned long)p * p_4[2][2][0]) * (unsigned long)(
                            -5221 + (int)v) - p_4[3][0][2]);
  }
  else {
    v_11 = (float)((int)(- p_13) / ((int)((unsigned short)(- ((float)v_15 - v_11))) + 468));
    v_11 = v_11;
    result = (unsigned int)((unsigned long long)((p_4[3][1][0] % 190UL) * (unsigned long)(
                                                 64951. * p_9[1][0])) + (
                            18446744073709534247ULL - 18446744073709544763ULL / (
                                                      (unsigned long long)v_11 + 434ULL)));
  }
  return result;
}


