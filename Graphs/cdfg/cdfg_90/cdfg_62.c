#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 197898725
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, unsigned char p_15)
{
  signed char v_19;
  char v_17;
  float v_13;
  char v_11;
  long long v_9;
  char v_7;
  unsigned char v_4;
  char v;
  long result;
  v_19 = (signed char)p;
  v_17 = (char)73;
  v_13 = 8.63036101161e+37f;
  v_11 = (char)52;
  v_9 = (long long)p_15;
  if ((long long)((971910848.f + v_13) / ((float)((int)p_15 & (int)v_17) + 722.f)) / -281599149LL > (long long)(- (! (
      (int)v_19 & (int)((signed char)v_13))))) {
    v_7 = (char)(- ((int)v_11));
    v_4 = (unsigned char)p;
    v = (char)((long long)((unsigned int)((int)v_4 / ((int)p + 97)) + 
                           4294939254U % (unsigned int)((int)v_7 + 852)) / (
               v_9 + 371LL));
  }
  else v = (char)p;
  result = (long)v;
  return result;
}


