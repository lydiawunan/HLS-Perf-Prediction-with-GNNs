//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1065734974
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, float p_5, double p_7,
                  signed char p_11[1], float p_13[3][2][1])
{
  signed char v_15;
  unsigned int v_9;
  unsigned char v;
  unsigned char result;
  v_15 = (signed char)p_13[0][0][0];
  v_9 = 907823023U;
  result = (unsigned char)p_7;
  v = (unsigned char)(((unsigned long)(~ (162147351L / (long)((int)p_11[0] + 964))) + (unsigned long)(
                       (v_9 + (unsigned int)p_5) + (unsigned int)((double)v_15 * p_7))) % (
                      (unsigned long)(- p_13[2][1][0]) + 934UL));
  v_15 = (signed char)(~ result);
  v_9 = (unsigned int)(~ ((unsigned long)(~ ((int)p_11[0] & (int)((signed char)p_13[0][0][0]))) - 
                          (unsigned long)(~ v_15) % (((unsigned long)p_13[0][0][0] - p) + 514UL)));
  result = (unsigned char)((0UL % (unsigned long)(((unsigned int)(-8029624712.28 * (double)p_5) & (
                                                   (unsigned int)p_7 + v_9)) + 668U)) * 24051UL);
  return result;
}


