//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 246938278
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, unsigned long p_5, int p_7,
                  unsigned int p_11, long long p_15)
{
  unsigned short v_21;
  unsigned short v_19;
  unsigned char v_17;
  unsigned short v_13;
  long long v_9;
  unsigned char v;
  unsigned char result;
  v_21 = (unsigned short)56632;
  v_13 = (unsigned short)46854;
  v_9 = 250461499LL;
  v = (unsigned char)91;
  v_19 = (unsigned short)(! ((unsigned long)(- (~ v_13)) % (p_5 + 269UL)));
  v_17 = (unsigned char)(((unsigned long)(36765U + (unsigned int)(p_7 / (
                                                                  p_7 + 232))) - (unsigned long)(
                          -20709L * (601386609L << 12))) + ((unsigned long)(
                                                            p_7 / ((int)v_19 + 51)) - p_5) / (unsigned long)(
                                                           (unsigned int)(
                                                           (int)v / (
                                                           (int)v + 197)) * (
                                                           p_11 + (unsigned int)v_21) + 518U));
  v = (unsigned char)(((long long)(p_5 - (unsigned long)p_7) / (! v_9 + 369LL) - (long long)(
                       ((unsigned int)p_7 & p_11) << ((long long)v_13 * p_15 & 31LL))) + (long long)(
                      (113UL - p_5) + (unsigned long)((int)p % ((int)v_17 + 641))));
  result = (unsigned char)(- ((unsigned long)((-387234711 + (int)v) - (int)(- p)) * 249388311UL));
  return result;
}


