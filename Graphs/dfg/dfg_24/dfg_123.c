#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 167695392
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, long p_5, unsigned short p_11)
{
  char v_13;
  char v_9;
  int v_7;
  double v;
  unsigned long result;
  v_9 = (char)127;
  result = (unsigned long)p_11;
  v_13 = (char)(- -1.39697697598e+38);
  v_7 = (int)(~ ((~ p_5 & (long)v_13) * 7647L));
  v = (double)(result + (unsigned long)(- (! p_5) + (long)(- v_7 / ((
                                                                    (int)v_9 - (int)p_11) + 76))));
  result = (unsigned long)((int)-40299316879.2 % (((int)((unsigned char)v) & (int)(- (- p))) + 105));
  return result;
}


