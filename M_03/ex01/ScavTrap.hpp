/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:43:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/24 18:24:32 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAV_TRAP_
# define __SCAV_TRAP_

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap{
    public:
        void guardGate();
};

#endif