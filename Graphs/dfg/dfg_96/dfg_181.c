#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 851634922
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p[3], float p_5, unsigned char p_7,
         unsigned long long p_11)
{
  char v_13;
  long v_9;
  double v;
  char result;
  v_13 = (char)-106;
  v_9 = (long)((4294948110ULL + p_11) * (unsigned long long)v_13);
  v = (double)(! ((unsigned long long)((long)(! p_7) / (! v_9 + 37L)) + 
                  18446744073709551525ULL % (p[1] + 891ULL)));
  result = (char)(- ((double)((unsigned long long)(- v) << ((p[0] & 56349ULL) & 63ULL)) * (
                     (-3766217184.85 - (double)p_5) - 4.82781826492e+37)));
  result = (char)((long long)(~ ((int)result * 121)) * 795882742LL);
  return result;
}


