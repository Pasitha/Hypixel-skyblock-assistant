#pragma once

struct hypixel {
public:
	const char* APIkey;

	// constructer get parameter APIkey and name from user 
	hypixel(const char* APIkey) : APIkey(APIkey) {

	}

	struct skyblock {

		struct bazaar {

			// Get the buy instanly price 
			const double const buyInstanlyPrice(struct hypixel* h, const char* product_id, int amount = 1) const {
				nlohmann::json response = nlohmann::json::parse(cpr::Get(cpr::Url{ "https://api.hypixel.net/skyblock/bazaar/product" },
					cpr::Parameters{ {"key", h->APIkey}, {"productId", product_id} }).text);

				return (response["success"]) ? (double)response["product_info"]["quick_status"]["sellPrice"] * amount : -1;
			}

			// Get the sell instanly price
			const double const sellInstanlyPrice(struct hypixel* h, const char* product_id, int amount = 1) const {
				nlohmann::json response = nlohmann::json::parse(cpr::Get(cpr::Url{ "https://api.hypixel.net/skyblock/bazaar/product" },
					cpr::Parameters{ {"key", h->APIkey}, {"productId", product_id} }).text);

				return (response["success"]) ? (double)response["product_info"]["quick_status"]["buyPrice"] * amount : -1;
			}
		};

		struct auction {
			// Now it nothing
		};

		struct recipe {
			// Now same as action struct LOL.
		};
	}skyblock;
private:
	
};
