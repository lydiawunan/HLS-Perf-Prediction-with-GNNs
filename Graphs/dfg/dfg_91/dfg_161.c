#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 197940371
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, char p_9)
{
  long long v_6;
  unsigned char v_4;
  unsigned long long v;
  signed char result;
  v_4 = (unsigned char)p;
  v_6 = -78LL;
  result = - (signed char)-115;
  v = (unsigned long long)p_9;
  result = (signed char)(~ ((11ULL / (v + 445ULL)) / (unsigned long long)(
                            (int)result + 114)) & (unsigned long long)(
                         ((long long)(-56 * (int)v_4) + 106LL % (v_6 + 677LL)) + ! (
                         p + (long long)result)));
  return result;
}


