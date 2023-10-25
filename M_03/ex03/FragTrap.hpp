/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:27:20 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 21:16:18 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAG_TRAP_
# define __FRAG_TRAP_

# include "ClapTrap.hpp"
# include <iostream>


class FragTrap : public ClapTrap{
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const &obj);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &obj);
        
        void attack(std::string const &target);
        void guardGate();
        void highFivesGuys(void);
};


#endif