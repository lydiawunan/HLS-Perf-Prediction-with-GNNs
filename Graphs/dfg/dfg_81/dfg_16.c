#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906805950
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, int p_4, long p_7, unsigned char p_11,
                   unsigned long long p_13)
{
  char v_9;
  unsigned long long v;
  unsigned short result;
  v = (unsigned long long)p_4;
  v_9 = (char)(- (~ v - (unsigned long long)((double)p + -62.2199045034)) * (
               (unsigned long long)(p * p_7 + p) % 18446744073011960588ULL));
  v = ~ ((unsigned long long)(979382419UL % (unsigned long)((int)(~ v_9) + 276)) ^ 
         (unsigned long long)((unsigned long)p_11 + 183452975UL) * (36769ULL % (
                                                                    p_13 + 911ULL)));
  result = (unsigned short)(- (((unsigned long long)p_4 / ((v + (unsigned long long)p_4) + 968ULL)) / (unsigned long long)(
                               ! p_7 + 943L)));
  result = (unsigned short)(((long)((int)result ^ (int)((unsigned short)-2.10611872005e+38f)) / (
                             p + 531L) + (long)(p_4 + -64) / (118L * p + 324L)) >> (
                            p_4 & 31));
  return result;
}


