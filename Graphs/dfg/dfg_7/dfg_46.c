//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 762581355
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p)
{
  long long v_9;
  char v_7;
  unsigned long long v_4;
  float v;
  signed char result;
  v_9 = p;
  result = (signed char)p;
  v_7 = (char)(~ p);
  v_4 = 183ULL;
  v = (float)(17447ULL % (unsigned long long)(~ ((v_9 + (long long)result) % (
                                                 ~ p + 534LL)) + 953LL));
  result = (signed char)(~ (~ ((unsigned long long)v << (v_4 & 63ULL))) + (
                         98ULL | 902280892ULL / (unsigned long long)(
                                 p * (long long)v_7 + 13LL)));
  return result;
}


