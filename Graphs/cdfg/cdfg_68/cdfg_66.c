#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 518084241
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, long p_11)
{
  unsigned long v_8;
  long long v_6;
  unsigned char v_4;
  double v;
  char result;
  v_8 = 697712377UL;
  v_6 = (long long)p_11;
  v_4 = (unsigned char)240;
  v = -5916518213.68;
  result = (char)(! 62711);
  while ((int)((unsigned char)(- (v / 268.))) > (int)(~ (! v_4))) {
    v_6 = (long long)v_8 / ((v_6 + -58LL) + 164LL);
    v_4 = (unsigned char)(! (- ((unsigned long)p + (unsigned long)p_11)));
    v_8 = (unsigned long)(- p_11);
    v = (double)(! ((unsigned long)(p | 15531U) + (unsigned long)((long)v_4 % -700040782L)));
  }
  while_0_break: ;
  return result;
}


