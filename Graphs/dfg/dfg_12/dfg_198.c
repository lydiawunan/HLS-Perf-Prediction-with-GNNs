#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 12516795
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned int p_5, unsigned long long p_11)
{
  char v_13;
  signed char v_9;
  float v_7;
  unsigned short v;
  char result;
  v_13 = p;
  v_9 = (signed char)p_11;
  v = (unsigned short)p_11;
  v_7 = (float)v_9;
  v = (unsigned short)((unsigned long long)((p_5 - 38518U) * 3580627826U + (unsigned int)v_7) + 
                       ((unsigned long long)((int)v_9 - 42213) % ((unsigned long long)v * p_11 + 629ULL)) * (unsigned long long)(
                       (-12700 - (int)v_13) ^ (int)v_7));
  result = (char)(-(short)23061);
  result = (char)(- (((unsigned long long)((int)result + (int)v) / (18446744073271704696ULL * (unsigned long long)p + 113ULL)) / 284285620ULL));
  return result;
}


