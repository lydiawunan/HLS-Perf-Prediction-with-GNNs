#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194660483
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, signed char p_4, long p_11, char p_15[3],
         long long p_25[4][4])
{
  float v_27;
  long long v_23;
  unsigned long v_21;
  unsigned int v_19;
  unsigned long v_17;
  unsigned short v_13;
  float v_9;
  unsigned short v_7;
  char v;
  long result;
  v_27 = (float)p_11;
  v_21 = 4294926705UL;
  v_19 = 3862076411U;
  v_17 = (unsigned long)p;
  v_13 = (unsigned short)p;
  v = (char)3;
  if ((unsigned long long)(~ ((long)(- v_13) - -597189982L)) >= 203ULL * (
                                                                ((unsigned long long)p_25[2][0] + 18446744073280806882ULL) % (
                                                                (unsigned long long)v_27 + 203ULL))) {
    v_13 = (unsigned short)v;
    v_9 = (float)3410023463UL;
    v_23 = ((long long)(- p_15[0]) + ((long long)v_21 & p_25[1][1])) - (long long)p;
  }
  else {
    v_23 = (long long)(~ ((int)p_4 - (int)p_15[1])) / ((! p_25[3][1] | -93LL) + 68LL);
    v_13 = (unsigned short)54773;
    v_9 = (float)((p_25[3][3] >> (p_11 & 63L)) * (long long)(- v_13));
  }
  if ((unsigned long long)((long long)((v_17 + (unsigned long)v_19) - v_21) % (
                           v_23 + 82LL)) > ((unsigned long long)p_25[2][0] + 18446744069414583879ULL) - 18446744073709551504ULL) 
    result = (long)((unsigned long long)p ^ (unsigned long long)p_4 * (
                                            43957ULL % (unsigned long long)(
                                            (int)p_4 + 65)));
  else {
    v_7 = (unsigned short)((-699.495198902 + (double)((long)v_9 >> (p_11 & 31L))) / (
                           (double)(((int)v_13 >> ((int)p_15[0] & 15)) + (int)(
                                    -102948488.f / (v_9 + 341.f))) + 523.));
    v = (char)(((long long)v_7 % -1LL) % 160LL);
    result = (long)v;
  }
  return result;
}


