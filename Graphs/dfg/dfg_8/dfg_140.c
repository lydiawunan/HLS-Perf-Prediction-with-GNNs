//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 339608349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned long long p_5, unsigned char p_9,
                       unsigned short p_13, long long p_15)
{
  signed char v_23;
  unsigned char v_21;
  long v_19;
  int v_17;
  unsigned long v_11;
  short v_7;
  float v;
  unsigned long long result;
  v_23 = (signed char)-57;
  v_21 = p_9;
  v_19 = (long)p_15;
  v_17 = 892108442;
  v_11 = (unsigned long)p_13;
  v_7 = (short)(- (((long)v_17 % -2801L) / (~ v_19 + 479L)) / (long)(
                ! (((int)v_21 + (int)p) - (int)p_13 % ((int)v_23 + 244)) + 819));
  result = (((unsigned long long)p_15 ^ p_5) % 18446744072815633665ULL) / 18446744073709551615ULL & (unsigned long long)p_15;
  v = (float)(unsigned char)24;
  result = (unsigned long long)((unsigned long)(v * (float)((unsigned long long)p % 23381ULL - 
                                                            p_5 * result)) % (
                                ((unsigned long)((int)(! v_7) - (int)p_9) - (
                                 v_11 - (unsigned long)(! p_13))) + 476UL));
  return result;
}


