#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 682724893
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[1][4][5], unsigned long p_5, double p_7,
                  unsigned short p_11[4])
{
  int v_17;
  unsigned long long v_15;
  long v_13;
  unsigned char v_9;
  double v;
  unsigned char result;
  v_17 = (int)p_7;
  v_15 = 18446744073171527409ULL;
  v_13 = -211166876L;
  v_9 = (unsigned char)46;
  v = p_7;
  while (735490284UL <= (- p_5 - (unsigned long)((float)p[0][0][3] / -148341296.f)) << (
                        (int)(- p_7) / (((int)v_9 - (int)p_11[3]) + 664) & 31)) {
    v = (unsigned long long)v_17 + (v_15 + (unsigned long long)((unsigned long)v_13 + 609526206UL));
    result = (unsigned char)124;
    v_15 = 18446744073709551573ULL;
    v_9 = (unsigned char)(p[0][1][3] / ((unsigned int)((double)((int)((unsigned char)v) & (int)result) - 
                                                       -487406331. / (
                                                       v + 73.)) + 383U));
  }
  while_0_break: ;
  result = (unsigned char)((long long)(p[0][0][1] % ((unsigned int)v + 797U) - (unsigned int)-14.7365026474f) - 792370701LL);
  return result;
}


