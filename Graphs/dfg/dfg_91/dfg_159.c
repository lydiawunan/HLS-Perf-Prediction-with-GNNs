#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83156134
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, unsigned char p_9, short p_11[5][2][2])
{
  unsigned long v_13;
  short v_6;
  unsigned int v_4;
  long long v;
  unsigned short result;
  v_4 = p;
  v_13 = 4294951472UL;
  v = (long long)(~ v_13);
  v_6 = (short)(4294958221. / (7999594466.14 * (((double)p_9 / 1279.87852199) * (double)(
                                                v / (long long)((int)p_11[1][1][0] + 788))) + 63.));
  result = (unsigned short)(v * (long long)((~ v_4 * (unsigned int)(~ v_6)) % (
                                            p + 88U)));
  return result;
}


