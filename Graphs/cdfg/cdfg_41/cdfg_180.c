#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 466667060
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, signed char p_4, signed char p_6, double p_8[1], short p_13)
{
  float v_25;
  long v_23;
  long long v_21;
  float v_19;
  unsigned long long v_17;
  float v_15;
  signed char v_11;
  signed char v;
  long result;
  v_25 = (float)p_8[0];
  v_23 = (long)p_4;
  v_21 = -27348LL;
  v_19 = (float)p_6;
  v_17 = (unsigned long long)p_13;
  v_11 = p_4;
  v = (signed char)-52;
  result = (long)p;
  if ((unsigned long long)(31972 + ((int)v_11 - (int)((signed char)(8930348032.f * v_25)))) >= 
      (unsigned long long)(- (161 * (int)p_13)) * ((v_17 + v_17) * (unsigned long long)(
                                                   (long long)p % (v_21 + 75LL)))) {
    v_11 = (signed char)((long long)p_8[0] - (((long long)p_8[0] + 47864992LL) - (
                                              v_21 - (long long)p_13)));
    v_15 = (float)((int)p_6 / ((int)((signed char)(- (- v_19))) + 965));
    v_17 = (unsigned long long)(~ ((unsigned long)((int)p | (int)((char)-7776992256.f)) - 3571411008UL));
  }
  else {
    v_17 = (unsigned long long)(((v_25 - 25436.f) - (float)p_6) * (float)p);
    v_15 = (float)((double)((unsigned int)(- v_19) + 452457658U * (unsigned int)v_19) / (
                   ((double)p - p_8[0]) / ((double)((int)p_6 * (int)p_4) + 592.) + 261.));
    result = (long)(((unsigned long)((int)p_13 * (int)((short)p_8[0])) - 4126047665UL) % (unsigned long)(
                    (-6 << (- v_23 & 31L)) + 584));
  }
  while (((int)p / ((int)p_4 + 74)) % ((int)(- p_6) + 177) + (int)(- p_8[0] / (
                                                                   (double)(
                                                                   (int)v ^ (int)v_11) + 757.)) < 
         -107 / (- ((int)p_13 & (int)p_6) + 41)) {
    v_15 = v_17 / (unsigned long long)((int)((unsigned char)v_15) % 157 + 324);
    result = (long)p_4;
    v_17 = (unsigned long long)((int)(~ p) % ((int)(- p_13) + 281));
    v = (signed char)(! (~ (- p_13)));
  }
  while_0_break: ;
  return result;
}


