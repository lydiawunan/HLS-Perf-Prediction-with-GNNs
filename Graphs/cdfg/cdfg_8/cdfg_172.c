#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 847073456
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_4[4][2], long p_7,
         signed char p_15, unsigned short p_17)
{
  unsigned short v_13;
  long long v_11;
  signed char v_9;
  unsigned int v;
  char result;
  v_13 = (unsigned short)p_4[3][1];
  v_11 = (long long)p_7;
  v_9 = (signed char)88;
  v = (unsigned int)p_4[0][1];
  result = (char)-76;
  while ((long long)(((unsigned long)((unsigned int)result % (v + 875U)) - (unsigned long)(
                      -812L * p_7)) - (unsigned long)(15348 % ((int)(! v_9) + 684))) != - v_11) {
    v_11 = (long long)((long)(! p_15) % (p_7 * (long)v_9 + 969L)) ^ (
           (long long)p_17 % 1036974643LL - (long long)((int)v_13 * (int)p_17));
    v_9 = (signed char)(! (~ p_7));
    v = (unsigned int)(~ ((int)result + (int)p_15) * (int)v_9);
  }
  while_0_break: ;
  result = (char)(~ ((unsigned long long)(p * (unsigned long)result) + 
                     116ULL * p_4[2][0]));
  return result;
}


