#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 623920234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned char p_9)
{
  unsigned long v_7;
  double v_5;
  long long v;
  signed char result;
  v_7 = (unsigned long)p;
  v = -853246377LL;
  v_5 = (double)(~ v);
  v = (long long)(- ((unsigned long)(((long)p ^ -1593L) | (long)(! p)) - 
                     ((unsigned long)v_5 / (v_7 + 844UL)) * (unsigned long)(
                     (int)p_9 | -16)));
  result = (signed char)(- (~ v));
  result = (signed char)((int)(- result) | (int)(- (- p)));
  return result;
}


