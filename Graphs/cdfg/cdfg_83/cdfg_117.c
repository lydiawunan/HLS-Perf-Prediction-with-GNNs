#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 474917569
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned char p_15)
{
  double v_12;
  char v_10;
  unsigned char v_8;
  long long v_6;
  int v_4;
  char v;
  long long result;
  v_12 = (double)p_15;
  v_10 = (char)-102;
  v_8 = (unsigned char)89;
  v_6 = (long long)p_15;
  v = (char)-49;
  result = (long long)p_15;
  if ((int)((unsigned char)-171.004488712) / ((int)(~ (~ p_15)) + 580) < 
      ((int)(- p) / 183) / (((int)(~ p_15) & (int)v) + 842)) {
    v_4 = 0;
    v_8 = p;
    v_12 = (double)((unsigned int)(- ((int)v_8 + (int)p)) ^ 343166170U % (unsigned int)(
                                                            (int)p / (
                                                            (int)p + 876) + 749));
  }
  else {
    v_4 = -62257;
    v_10 = (char)p_15;
    v_6 = (long long)(~ ((int)v_10 * ((int)p - (int)v_10)));
  }
  while ((unsigned long)((int)(! v) - ~ (-29 % (v_4 + 1006))) == 1042683799UL) {
    result = (long long)v_10 ^ ((long long)v_8 - (v_6 - -239907472LL));
    v_10 = (char)(! (18 * (int)v));
    v_6 = (long long)(- v_12);
    v = (char)(- (! -355517566L));
  }
  while_0_break: ;
  return result;
}


