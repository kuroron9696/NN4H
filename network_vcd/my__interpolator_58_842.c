#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_842_50946760;

SignalI remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeremaining_51306140() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_50946760;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makebase_43588440() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_50946760;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makenext__data_47579280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_50946760;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480;

SignalI makeinterpolated__value_48025940() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480 = signalI;
   signalI->owner = (Object)my__interpolator_58_842_50946760;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __56393300;

void code__56393300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                                    src1 = base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__56388200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_48025940_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
      set_value_pos(pool_state);
   }
}

Block make__56393300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __56393300 = block;
   block->owner = (Object)__56391380;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__56393300;

   return block;
};

Value make__56388200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_84_50605700;

Scope __50605320;

Scope make__50605320() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __50605320 = scope;
   scope->owner = (Object)my__interpolator_58_84_50605700;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __56391380;

Behavior make__56391380() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __56391380 = behavior;
   behavior->owner = (Object)my__interpolator_58_84_50605700;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[base_43588440_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[next__data_47579280_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480);
   remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any += 1;
   remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any = realloc(remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any,remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any*sizeof(Object));
remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->any[remaining_51306140_my__interpolator_58_842_50946760_func0_58_84_49580480_func0_58_841_56160320_layer0_58_84_50281060_layer0_58_840_50885140_neural__network_58_84_49011620_neural__network_58_840_50116760______58_84_49012320______58_840_50525480->num_any-1] = (Object)behavior;
   behavior->block = make__56393300();

   return behavior;
}

Scope makemy__interpolator_58_84_50605700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_84_50605700 = scope;
   scope->owner = (Object)my__interpolator_58_842_50946760;
   scope->name = "my_interpolator:T";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__50605320();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__56391380();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_842_50946760() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_842_50946760 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T2";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_51306140();
   systemT->inputs[1] = makebase_43588440();
   systemT->inputs[2] = makenext__data_47579280();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_48025940();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_84_50605700();

   return systemT;
}