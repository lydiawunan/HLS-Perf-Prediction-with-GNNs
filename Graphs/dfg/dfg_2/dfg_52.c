//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 927602091
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned long p_5[5][2][5], short p_11,
                   long long p_13, double p_15)
{
  unsigned int v_17;
  unsigned long v_9;
  long v_7;
  unsigned int v;
  unsigned short result;
  v_9 = 3998896194UL;
  v_17 = (unsigned int)(43806 >> (((long long)(! ((int)p_11 + 125)) - 
                                   183981623LL % (long long)((p_5[3][1][3] & (unsigned long)p_11) + 830UL)) & 15LL));
  v_7 = (long)((unsigned long long)((unsigned int)(- (- p_15)) * - (3282300462U % (
                                                                    v_17 + 730U))) * 18446744072910329726ULL);
  v = (unsigned int)((long long)(~ (- ((int)((short)p) * -19914))) * (
                     (long long)(((unsigned long)v_7 + v_9) / (unsigned long)(
                                 465 / ((int)p_11 + 620) + 546)) / ((
                                                                    p_13 / (long long)(
                                                                    (int)p_11 + 218)) / -724667867LL + 959LL)));
  result = (unsigned short)(! ((688971952UL - (unsigned long)v) + ((unsigned long)(- p) - p_5[1][0][0])));
  return result;
}


