//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 100943200
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, long long p_5, unsigned int p_15,
                  long long p_17[4])
{
  double v_25;
  float v_23;
  unsigned short v_21;
  char v_19;
  long v_13;
  char v_11;
  float v_9;
  unsigned long v_7;
  unsigned char v;
  unsigned char result;
  v_25 = -860.523066716;
  v_23 = (float)p_15;
  v_21 = (unsigned short)p_17[2];
  v_19 = (char)-26;
  v_13 = -337257716L;
  v_11 = (char)p_5;
  v_9 = (float)(((unsigned long)((float)((long long)v_21 * p_5) + (-45655.f + v_23)) + 
                 (unsigned long)(~ v_13) / 4294940013UL) % ((unsigned long)(
                                                            - (- v_25) - 0.) + 994UL));
  v_7 = (unsigned long)((long long)(! v_11) % ((long long)((unsigned long)v_13 - (unsigned long)p_15) % (
                                               p_17[0] + 951LL) + 253LL) + ! (
                        (long long)(-47981 / ((int)v_19 + 595)) - - p_5));
  v = (unsigned char)((~ (12953UL / (v_7 + 650UL)) + (unsigned long)(
                       (v_9 / 54438.f) * (float)(! p))) / 25UL);
  result = (unsigned char)((long long)(- (! ((int)-1.39493864218e+38f / -673327281))) - 
                           (long long)(- (! v)) * ((long long)p ^ ! p_5));
  return result;
}


