#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 87720238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, long p_7, double p_11)
{
  long long v_15;
  unsigned short v_13;
  int v_9;
  long v_4;
  long v;
  unsigned short result;
  v_15 = 134731954LL;
  v_13 = (unsigned short)34254;
  v = (long)p;
  result = (unsigned short)8007;
  v_9 = (int)(~ ((long long)(! v_13) / (96LL % (v_15 + 568LL) + 906LL)) / (long long)(
              - (! ((int)((unsigned short)p) + (int)result)) + 903));
  v_4 = 0L;
  result = (unsigned short)(18446744073145661113ULL - (unsigned long long)(- v_9));
  result = (unsigned short)((unsigned long long)(- (v / 88L) % (v_4 + 984L)) - 
                            ((unsigned long long)((unsigned int)p - 4294955483U) + (
                             75676978ULL - (unsigned long long)p_7)) * (unsigned long long)(
                            (long)(-124262100 % (v_9 + 316)) + (long)result / (
                                                               v_4 + 573L)));
  return result;
}


