//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 367257269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, float p_7)
{
  unsigned int v_9;
  int v_4;
  unsigned long v;
  unsigned short result;
  v_9 = (unsigned int)p;
  result = (unsigned short)65513;
  v_4 = (int)-1.99226706457e+38f;
  v = (unsigned long)v_9;
  result = (unsigned short)(- ((unsigned long)(! result) - v) / ((unsigned long)(- (
                                                                 (float)(! v_4) + (
                                                                 (float)p - p_7))) + 731UL));
  return result;
}


