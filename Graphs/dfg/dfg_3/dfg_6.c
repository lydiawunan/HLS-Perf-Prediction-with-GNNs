//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 439346538
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p, unsigned short p_4, double p_7)
{
  int v_15;
  int v_13;
  unsigned long long v_11;
  long v_9;
  unsigned int v;
  long result;
  v_15 = (int)p_4;
  v_11 = (unsigned long long)p_4;
  v_9 = -207705108L;
  v_13 = v_15;
  v = (unsigned int)(- (- ((double)v_11 - (double)v_13 * 359.383847855)));
  result = (long)((unsigned long)v / (((p % ((unsigned long)p_7 + 913UL)) % 729UL - (unsigned long)v_9) + 645UL));
  result = (long)(158UL / ((- (p % 27527UL) + (unsigned long)(- ((long)p_4 % (
                                                                 result + 791L)))) + 482UL));
  return result;
}


