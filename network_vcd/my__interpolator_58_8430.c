#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8430_61930020;

SignalI base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makebase_62060900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_61930020;
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

SignalI next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makenext__data_62210800() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_61930020;
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

SignalI change_62287220_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makechange_62287220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   change_62287220_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_61930020;
   signalI->name = "change";
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

SignalI remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeremaining_62453300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_61930020;
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

SignalI interpolated__value_62552820_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300;

SignalI makeinterpolated__value_62552820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_62552820_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300 = signalI;
   signalI->owner = (Object)my__interpolator_58_8430_61930020;
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

Block __64470740;

void code__64470740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                                    src0 = next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                                    src1 = base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__64466600();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_62552820_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
      set_value_pos(pool_state);
   }
}

Block make__64470740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __64470740 = block;
   block->owner = (Object)__64469120;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__64470740;

   return block;
};

Value make__64466600() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_843_55588420;

Scope __55587900;

Scope make__55587900() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __55587900 = scope;
   scope->owner = (Object)my__interpolator_58_843_55588420;
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

Behavior __64469120;

Behavior make__64469120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __64469120 = behavior;
   behavior->owner = (Object)my__interpolator_58_843_55588420;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[base_62060900_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[next__data_62210800_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300);
   remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any += 1;
   remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any = realloc(remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any,remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any*sizeof(Object));
remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->any[remaining_62453300_my__interpolator_58_8430_61930020_func2_58_84_65405840_func2_58_840_48077100_layer1_58_84_47003040_layer1_58_840_63934400_neural__network_58_84_49158220_neural__network_58_840_56110080______58_84_47886980______58_840_55985300->num_any-1] = (Object)behavior;
   behavior->block = make__64470740();

   return behavior;
}

Scope makemy__interpolator_58_843_55588420() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_843_55588420 = scope;
   scope->owner = (Object)my__interpolator_58_8430_61930020;
   scope->name = "my_interpolator:T3";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__55587900();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__64469120();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8430_61930020() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8430_61930020 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T30";
   systemT->num_inputs = 4;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makebase_62060900();
   systemT->inputs[1] = makenext__data_62210800();
   systemT->inputs[2] = makechange_62287220();
   systemT->inputs[3] = makeremaining_62453300();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_62552820();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_843_55588420();

   return systemT;
}