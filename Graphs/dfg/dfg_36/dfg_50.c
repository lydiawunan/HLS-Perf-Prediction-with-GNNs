#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 367500902
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, double p_5, short p_13, double p_15)
{
  unsigned char v_11;
  char v_9;
  char v_7;
  unsigned long long v;
  unsigned int result;
  v_9 = (char)-24;
  result = 3811562614U;
  v = (unsigned long long)(- p_15);
  v_11 = (unsigned char)(((int)((short)(-1017735520. - - p_5)) * (int)(~ (~ p_13))) * 42630);
  v_7 = (char)((v + (unsigned long long)((int)(~ v_9) % ((int)(- v_9) + 459))) * (unsigned long long)v_11);
  result = (unsigned int)(! (~ (v / (unsigned long long)(result + 843U)) % (
                             (unsigned long long)(((double)p * p_5) / (
                                                  (double)(- v_7) + 500.)) + 379ULL)));
  return result;
}


