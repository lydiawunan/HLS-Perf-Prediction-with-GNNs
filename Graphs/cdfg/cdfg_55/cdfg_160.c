#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 322766760
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long long p[4][1][1], unsigned short p_4, int p_6,
         unsigned int p_8, double p_13)
{
  unsigned long v_17;
  int v_15;
  unsigned long long v_11;
  unsigned long v;
  char result;
  v_17 = (unsigned long)p_6;
  v_15 = -63541;
  v_11 = 11764ULL;
  result = (char)p[3][0][0];
  if ((double)v_15 + 7199992320. * (p_13 + p_13) > (double)((unsigned long)(! (
                                                            p_6 + (int)result)) - (
                                                            ((unsigned long)p_4 - v_17) + 262993744UL))) {
    v = (unsigned long)(! (! (~ p_6)));
    result = (char)((unsigned long long)((unsigned long)(! p_8) % (55154UL % (
                                                                   v + 927UL) + 293UL)) | 
                    (v_11 % ((unsigned long long)p_13 + 807ULL)) / 104ULL);
    result = (char)((int)p_4 + (-121 % (p_6 + 814) | (int)result));
  }
  else result = (char)((int)(! (! p_4)) - ((int)((char)(- p_13)) | 120));
  result = (char)((unsigned long long)(- (! result)) % (~ (! p[1][0][0]) + 836ULL));
  return result;
}


