#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 241470881
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p[4], signed char p_9, unsigned char p_11, float p_13,
                unsigned short p_15)
{
  unsigned short v_7;
  long long v_5;
  signed char v;
  signed char result;
  v_7 = (unsigned short)p_13;
  result = p_9;
  v = (signed char)(! ((int)(- p_15) * ((int)v_7 % -43)));
  while (! (~ ((int)v - (int)p[1])) < (int)(~ p[0])) {
    v_5 = (int)v_7 / 32;
    v_7 = (unsigned short)p_13;
    result = (signed char)((long long)(-207 % (((int)p[2] & (int)p_9) + 85)) * (
                           (long long)((int)p[1] * (int)p_11) % (v_5 + 75LL)));
    v = (signed char)(! (char)115);
  }
  while_0_break: ;
  return result;
}


