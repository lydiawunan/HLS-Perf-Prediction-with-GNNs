#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 484091849
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p[2][2][5], signed char p_11[5][2])
{
  unsigned int v_13;
  unsigned char v_9;
  unsigned long long v_7;
  short v_5;
  unsigned long v;
  signed char result;
  v_13 = (unsigned int)p[1][0][0];
  v_9 = (unsigned char)p_11[0][0];
  v = (unsigned long)p_11[2][1];
  result = (signed char)7;
  v_7 = (unsigned long long)(- v);
  v = (unsigned long)((! (~ v_7) % (unsigned long long)((int)(~ (~ v_9)) + 709)) / (unsigned long long)(
                      ((unsigned int)(- ((int)p_11[0][0] % 22659)) + 
                       (unsigned int)3.10650983435e+38f * (v_13 * 152U)) + 823U));
  v_5 = (short)(- (! (187 + (int)((unsigned char)-719.397381163))) << (
                ! ((long long)(p[0][1][0] * (unsigned long)-3.39892701268e+38f) + -258506013LL) & 31LL));
  result = (signed char)(! (4294946049UL % (p[0][1][0] + 770UL) & (545071956UL + v)) % (unsigned long)(
                         (int)result / ((int)(~ v_5) + 806) + 64));
  return result;
}


