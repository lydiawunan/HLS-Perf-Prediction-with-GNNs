#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003728460
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, long p_9, unsigned short p_11, short p_13,
        unsigned int p_19)
{
  unsigned long long v_25;
  unsigned long long v_23;
  unsigned long v_21;
  float v_17;
  unsigned short v_15;
  char v_7;
  unsigned long long v_4;
  unsigned short v;
  int result;
  v_25 = (unsigned long long)p_13;
  v_23 = (unsigned long long)p_11;
  v_21 = 40266UL;
  v_17 = -2.07691123892e+38f;
  v_15 = (unsigned short)10711;
  v_4 = 62102ULL;
  v = (unsigned short)p_9;
  result = (int)p;
  if (2709340144.23 > (double)(v_23 + ((unsigned long long)(~ v_15) ^ (
                                       (unsigned long long)v_17 | v_25)))) {
    v_17 = (float)((unsigned long long)v_15 ^ 57444ULL % (unsigned long long)(
                                              ((int)1.88107686688e+38f ^ -633765373) + 300));
    v_15 = - v;
    v_4 = (unsigned long long)(~ ((long)(! p_13) - p_9));
  }
  else {
    v_15 = (unsigned short)(! v_21);
    result = (int)p_19;
    v_17 = (float)(unsigned char)223;
  }
  if ((float)(((long long)((int)p_13 + 25047) + -34867LL) - (long long)p_13) < v_17) {
    v = (unsigned short)((! p - 8990U) % (p + 215U));
    v_4 = v_4;
    result = (int)((unsigned long long)(! (- v)) - ((unsigned long long)2.89552997858e+37f % 238206759ULL | (
                                                    v_4 + 18446744073709551548ULL)));
  }
  else {
    v_4 = (unsigned long long)((long long)((result ^ (int)p_11) * ((int)p_13 - (int)v_15)) ^ 0);
    v_7 = (char)p_9;
    result = (int)((((unsigned long long)p | v_4) % (unsigned long long)(
                    (int)((short)2.39686300523e+38f) * 5113 + 80)) / (unsigned long long)(
                   (int)v_7 + 832));
  }
  return result;
}


