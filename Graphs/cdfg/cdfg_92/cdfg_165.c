#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 972775353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, int p_15[3])
{
  long v_13;
  long long v_11;
  unsigned char v_9;
  long v_7;
  double v_5;
  char v;
  unsigned long result;
  v_13 = 616420357L;
  v_11 = (long long)p_15[0];
  v_9 = (unsigned char)p_15[2];
  v_7 = -238765258L;
  v_5 = -8172870049.34;
  v = (char)p_15[0];
  while (- (- v_5) > ((647.946145808 - (double)v_7) / ((double)v_9 + 390.)) / (
                     (double)v_11 + 951.)) {
    v_7 = (long)(- p);
    v = (char)p_15[0];
    v_9 = (unsigned char)((long)(- ((int)p ^ p_15[1])) / (v_13 + 265L));
  }
  while_0_break: ;
  result = (unsigned long)(9 - ((int)v / ((int)p + 507)) % (((int)p - 7) + 541));
  return result;
}


