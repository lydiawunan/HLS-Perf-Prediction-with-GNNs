#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895443822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned int p_5, unsigned int p_7,
                   signed char p_9, long p_13)
{
  float v_19;
  long v_17;
  unsigned long long v_15;
  unsigned long long v_11;
  char v;
  unsigned short result;
  v_19 = (float)p;
  v_17 = -382211291L;
  v_15 = (unsigned long long)p_7;
  v_11 = 28592ULL;
  v = (char)p_5;
  v_19 = (float)((unsigned long)(! (112 / ((int)v + 421) + (int)v_19)) + 
                 (unsigned long)(p_5 * (unsigned int)(28242 % ((int)p_9 + 20))) % (unsigned long)(
                 ((v_17 - (long)p) + (long)(~ v)) + 290L));
  v = (char)p_5;
  v_11 = (unsigned long long)-616.577015118 / (((unsigned long long)(
                                                (long)(~ p_9) % ((p_13 + v_17) + 568L)) | (
                                                (unsigned long long)v | (
                                                (unsigned long long)v_19 + v_11))) + 857ULL);
  result = (unsigned short)((unsigned long long)(((unsigned int)((int)p * (int)v) + (
                                                  4294967231U - p_5)) / (
                                                 - (p_7 - (unsigned int)p_9) + 439U)) | 
                            ((v_11 << (p_13 & 63L)) + ((unsigned long long)p_9 + v_15)) / (
                            ((unsigned long long)(- p_13) + 18446744073034021957ULL * (unsigned long long)p_13) + 185ULL));
  return result;
}


