//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 527775436
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, long p_7)
{
  int v_9;
  unsigned short v_4;
  unsigned long long v;
  short result;
  v_9 = (int)p_7;
  v = (unsigned long long)(-163435301 / (v_9 + 502));
  v_4 = (unsigned short)(! p_7);
  result = (short)p;
  result = (short)(- (((unsigned long long)((int)((short)1.57711869325e+38f) % (
                                            (int)result + 743)) + v % 15927ULL) + (unsigned long long)(! (- v_4))));
  return result;
}


