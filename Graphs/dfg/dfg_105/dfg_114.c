#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 229359979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned char p_11)
{
  signed char v_9;
  char v_6;
  char v_4;
  long long v;
  unsigned long long result;
  v_4 = (char)p;
  v_9 = (signed char)-81;
  v_6 = (char)((int)(~ p) * (int)(! (- (~ p_11))));
  v = (long long)((int)(- p) % ((int)p + 373));
  result = (unsigned long long)(v / (long long)((int)v_4 + 17) | (long long)v_6) + 
           ((unsigned long long)((int)v_4 * (int)v_4) - 451911731ULL) % (unsigned long long)(
           (int)p % ((int)v_9 / 251 + 181) + 202);
  return result;
}


