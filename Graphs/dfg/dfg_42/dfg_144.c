#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 507149263
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, signed char p_5[5], unsigned long p_7)
{
  double v_11;
  unsigned long v_9;
  long long v;
  char result;
  v_11 = 247.708666348;
  v_9 = 3233774154UL;
  v = (long long)(- v_11);
  result = (char)(((long long)(! v_9) % ((v + -298851185LL) + 486LL) - -6323529628LL) % 225LL);
  v = (long long)((unsigned long)(- (- (! result))) & (p_7 ^ 43416UL));
  result = (char)((p >> ((unsigned int)((double)(-574051897LL % (v + 104LL)) + -1.43941758364e+47) & 31U)) / (unsigned int)(
                  (int)(- (! (! p_5[1]))) + 19));
  return result;
}


