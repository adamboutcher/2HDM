// ====================================================================
// This file is part of FlexibleSUSY.
//
// FlexibleSUSY is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License,
// or (at your option) any later version.
//
// FlexibleSUSY is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with FlexibleSUSY.  If not, see
// <http://www.gnu.org/licenses/>.
// ====================================================================

// File generated at Tue 17 Nov 2020 15:32:58

#ifndef ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_TWO_SCALE_HIGH_SCALE_CONSTRAINT_H
#define ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_TWO_SCALE_HIGH_SCALE_CONSTRAINT_H

#include "ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_high_scale_constraint.hpp"
#include "ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_input_parameters.hpp"
#include "single_scale_constraint.hpp"

namespace flexiblesusy {

template <class T>
class ScalarSingletZ2DMEWSBoutputlamHEFTHiggs;

class Two_scale;

template<>
class ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_high_scale_constraint<Two_scale> : public Single_scale_constraint {
public:
   ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_high_scale_constraint() = default;
   ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_high_scale_constraint(ScalarSingletZ2DMEWSBoutputlamHEFTHiggs<Two_scale>*);
   virtual ~ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_high_scale_constraint() = default;
   virtual void apply() override;
   virtual double get_scale() const override;
   virtual std::string name() const override { return "ScalarSingletZ2DMEWSBoutputlamHEFTHiggs high-scale constraint"; }
   virtual void set_model(Model*) override;

   void clear();
   double get_initial_scale_guess() const;
   const ScalarSingletZ2DMEWSBoutputlamHEFTHiggs_input_parameters& get_input_parameters() const;
   ScalarSingletZ2DMEWSBoutputlamHEFTHiggs<Two_scale>* get_model() const;
   void initialize();
   void set_scale(double); ///< fix unification scale (0 = unfixed)

protected:
   void update_scale();
   bool check_non_perturbative();

private:
   double scale{0.};
   double initial_scale_guess{0.};
   ScalarSingletZ2DMEWSBoutputlamHEFTHiggs<Two_scale>* model{nullptr};

   void check_model_ptr() const;
};

} // namespace flexiblesusy

#endif
