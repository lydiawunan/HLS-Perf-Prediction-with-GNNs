#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 591290614
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, long long p_17[1],
                  unsigned char p_21[2][3][5])
{
  int v_19;
  char v_15;
  unsigned short v_13;
  unsigned long long v_11;
  long long v_9;
  long long v_7;
  unsigned short v_5;
  int v;
  unsigned char result;
  v_19 = 14081;
  v_15 = (char)9;
  v_13 = (unsigned short)7872;
  v_11 = 18446744073709488700ULL;
  v_9 = (long long)p_21[0][0][1];
  v_5 = (unsigned short)42040;
  v = 42312;
  result = (unsigned char)p;
  v_5 = (unsigned short)((unsigned long long)((v % ((int)result + 709) - (int)v_15) - ~ (
                                              v - (int)v_5)) % (((p / (unsigned long long)(
                                                                  v_9 + 514LL)) * (
                                                                 p % (
                                                                 p + 948ULL)) - (unsigned long long)(
                                                                 p_17[0] * (long long)v_19 ^ (long long)(~ p_21[1][2][1]))) + 384ULL));
  v_7 = (long long)(18446744073709551603ULL & (((unsigned long long)v_5 + v_11) / 18446744073689926917ULL | (
                                               (p & (unsigned long long)v_13) - 18446744073393729325ULL)));
  v = (int)(~ ((p & (unsigned long long)v_5) / (unsigned long long)(v_7 / -413LL + 883LL)) % (unsigned long long)(
            ~ v_9 + 925LL));
  result = (unsigned char)(~ v);
  return result;
}


