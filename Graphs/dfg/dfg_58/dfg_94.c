#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823979299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, unsigned int p_9, char p_11, float p_13)
{
  unsigned long v_7;
  long v_4;
  unsigned long v;
  signed char result;
  v = (unsigned long)((float)(-470664375LL | (long long)(~ p_11)) * - (- (- p_13)));
  v_7 = (unsigned long)(~ p_9);
  v_4 = (long)((unsigned long long)((unsigned long)(~ (p ^ 193)) * - (~ v_7)) & 
               (18446744073512993868ULL ^ (unsigned long long)(4294932761U * (unsigned int)p)) % (unsigned long long)(
               v + 98UL));
  result = (signed char)(~ (- ((v - (unsigned long)-11.9949160179) / (unsigned long)(
                               v_4 + 523L))));
  return result;
}


